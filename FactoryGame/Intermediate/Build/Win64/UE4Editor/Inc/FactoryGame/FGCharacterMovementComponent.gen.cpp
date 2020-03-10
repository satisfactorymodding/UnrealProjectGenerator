// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCharacterMovementComponent() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EDeferredCollisionChange();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPipeHyperData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePipeHyperPart_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLadderComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJumpingStilts_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHookshot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGParachute_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGJetPack_NoRegister();
// End Cross Module References
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ECustomMovementMode, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ECustomMovementMode"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMovementMode(ECustomMovementMode_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECustomMovementMode_Hash() { return 818532954U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMovementMode"), 0, Get_Z_Construct_UEnum_FactoryGame_ECustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomMovementMode::CMM_None", (int64)ECustomMovementMode::CMM_None },
				{ "ECustomMovementMode::CMM_Ladder", (int64)ECustomMovementMode::CMM_Ladder },
				{ "ECustomMovementMode::CMM_PipeHyper", (int64)ECustomMovementMode::CMM_PipeHyper },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CMM_Ladder.DisplayName", "Ladder" },
				{ "CMM_None.DisplayName", "None" },
				{ "CMM_PipeHyper.DisplayName", "Hyper Pipe" },
				{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
				{ "ToolTip", "Custom states we can be in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ECustomMovementMode",
				"ECustomMovementMode",
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
	static UEnum* EDeferredCollisionChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EDeferredCollisionChange, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EDeferredCollisionChange"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EDeferredCollisionChange>()
	{
		return EDeferredCollisionChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDeferredCollisionChange(EDeferredCollisionChange_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EDeferredCollisionChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EDeferredCollisionChange_Hash() { return 2780170460U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EDeferredCollisionChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDeferredCollisionChange"), 0, Get_Z_Construct_UEnum_FactoryGame_EDeferredCollisionChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDeferredCollisionChange::DCC_None", (int64)EDeferredCollisionChange::DCC_None },
				{ "EDeferredCollisionChange::DCC_TURN_ON", (int64)EDeferredCollisionChange::DCC_TURN_ON },
				{ "EDeferredCollisionChange::DCC_TURN_OFF", (int64)EDeferredCollisionChange::DCC_TURN_OFF },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DCC_None.DisplayName", "Do nothing" },
				{ "DCC_TURN_OFF.DisplayName", "Turn Off Collision" },
				{ "DCC_TURN_ON.DisplayName", "Turn On Collision" },
				{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
				{ "ToolTip", "Used for deferred collision state changes. Needed to make sure overlap updates don't happen mid logic steps and can cause recursive triggering of event calls.\n //[DavalliusA:Thu/27-02-2020] added when working on hyper tube bugs, as leaving one hyper tube and turning on collision in the movement mode change function could cause over movement mode changed functions to trigger." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EDeferredCollisionChange",
				"EDeferredCollisionChange",
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
class UScriptStruct* FPlayerPipeHyperData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPlayerPipeHyperData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPipeHyperData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PlayerPipeHyperData"), sizeof(FPlayerPipeHyperData), Get_Z_Construct_UScriptStruct_FPlayerPipeHyperData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPlayerPipeHyperData>()
{
	return FPlayerPipeHyperData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerPipeHyperData(FPlayerPipeHyperData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PlayerPipeHyperData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPlayerPipeHyperData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPlayerPipeHyperData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerPipeHyperData")),new UScriptStruct::TCppStructOps<FPlayerPipeHyperData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPlayerPipeHyperData;
	struct Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFulPipeEndDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFulPipeEndDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFulPipeEndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFulPipeEndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeTempMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPipeTempMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxCurveDiffSmooth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxCurveDiffSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxCurveDiffThisFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxCurveDiffThisFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistanceToEndOfPipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDistanceToEndOfPipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPipeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeDirectionLast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPipeDirectionLast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeCurveDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPipeCurveDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeConstantAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPipeConstantAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPipeFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeGravityStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPipeGravityStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinPipeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinPipeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTravelingPipeHyper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTravelingPipeHyper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPipeHyperData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndDir_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "World space direction of the end of the pipe chain.. Only guaranteed to be accurate if the end is within 2000 units." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndDir = { "mFulPipeEndDir", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mFulPipeEndDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndDir_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndPoint_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "World space position of the end of the pipe chain.. Only guaranteed to be accurate if the end is within 2000 units." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndPoint = { "mFulPipeEndPoint", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mFulPipeEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeTempMinSpeed_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeTempMinSpeed = { "mPipeTempMinSpeed", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeTempMinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeTempMinSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeTempMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffSmooth_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffSmooth = { "mMaxCurveDiffSmooth", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mMaxCurveDiffSmooth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffSmooth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffThisFrame_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffThisFrame = { "mMaxCurveDiffThisFrame", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mMaxCurveDiffThisFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffThisFrame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffThisFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "maximum of 2000 (To save time on calculating it on update)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent = { "mCombinedLengthTillEndOfPipesINcludingCurrent", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mCombinedLengthTillEndOfPipesINcludingCurrent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mDistanceToEndOfPipe_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Distance to the end of the whole pipe chain, but maximum of 2000 (To save time on calculating it on update)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mDistanceToEndOfPipe = { "mDistanceToEndOfPipe", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mDistanceToEndOfPipe), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mDistanceToEndOfPipe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mDistanceToEndOfPipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirection_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "World space direction of pipe in current location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirection = { "mPipeDirection", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirectionLast_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "World space direction of pipe last frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirectionLast = { "mPipeDirectionLast", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeDirectionLast), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirectionLast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirectionLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeCurveDamping_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeCurveDamping = { "mPipeCurveDamping", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeCurveDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeCurveDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeCurveDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeConstantAcceleration_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeConstantAcceleration = { "mPipeConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeConstantAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeConstantAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeConstantAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeFriction_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeFriction = { "mPipeFriction", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeFriction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeGravityStrength_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeGravityStrength = { "mPipeGravityStrength", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mPipeGravityStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeGravityStrength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeGravityStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMinPipeSpeed_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMinPipeSpeed = { "mMinPipeSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mMinPipeSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMinPipeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMinPipeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mTravelingPipeHyper_MetaData[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "The pipe we are currently traveling in" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mTravelingPipeHyper = { "mTravelingPipeHyper", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerPipeHyperData, mTravelingPipeHyper), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mTravelingPipeHyper_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mTravelingPipeHyper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mFulPipeEndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeTempMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMaxCurveDiffThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mCombinedLengthTillEndOfPipesINcludingCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mDistanceToEndOfPipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeDirectionLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeCurveDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeConstantAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mPipeGravityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mMinPipeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::NewProp_mTravelingPipeHyper,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PlayerPipeHyperData",
		sizeof(FPlayerPipeHyperData),
		alignof(FPlayerPipeHyperData),
		Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerPipeHyperData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerPipeHyperData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerPipeHyperData"), sizeof(FPlayerPipeHyperData), Get_Z_Construct_UScriptStruct_FPlayerPipeHyperData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerPipeHyperData_Hash() { return 968258296U; }
	static FName NAME_UFGCharacterMovementComponent_OnNewTravelPipeSection = FName(TEXT("OnNewTravelPipeSection"));
	void UFGCharacterMovementComponent::OnNewTravelPipeSection()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGCharacterMovementComponent_OnNewTravelPipeSection),NULL);
	}
	static FName NAME_UFGCharacterMovementComponent_ServerSetHookLocation = FName(TEXT("ServerSetHookLocation"));
	void UFGCharacterMovementComponent::ServerSetHookLocation(FVector const& hookLocation)
	{
		FGCharacterMovementComponent_eventServerSetHookLocation_Parms Parms;
		Parms.hookLocation=hookLocation;
		ProcessEvent(FindFunctionChecked(NAME_UFGCharacterMovementComponent_ServerSetHookLocation),&Parms);
	}
	void UFGCharacterMovementComponent::StaticRegisterNativesUFGCharacterMovementComponent()
	{
		UClass* Class = UFGCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterPipeHyper", &UFGCharacterMovementComponent::execEnterPipeHyper },
			{ "GetBaseVelocity", &UFGCharacterMovementComponent::execGetBaseVelocity },
			{ "GetIsSprinting", &UFGCharacterMovementComponent::execGetIsSprinting },
			{ "GetOnLadder", &UFGCharacterMovementComponent::execGetOnLadder },
			{ "GetPipeCharacterTransform", &UFGCharacterMovementComponent::execGetPipeCharacterTransform },
			{ "GetPipeHyperDataRef", &UFGCharacterMovementComponent::execGetPipeHyperDataRef },
			{ "GetPipeMinSpeed", &UFGCharacterMovementComponent::execGetPipeMinSpeed },
			{ "GetPipeTravelDirectionWorld", &UFGCharacterMovementComponent::execGetPipeTravelDirectionWorld },
			{ "GetPipeVelocity", &UFGCharacterMovementComponent::execGetPipeVelocity },
			{ "GetWantsToSprint", &UFGCharacterMovementComponent::execGetWantsToSprint },
			{ "IsInHyperPipe", &UFGCharacterMovementComponent::execIsInHyperPipe },
			{ "ServerSetHookLocation", &UFGCharacterMovementComponent::execServerSetHookLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics
	{
		struct FGCharacterMovementComponent_eventEnterPipeHyper_Parms
		{
			AFGBuildablePipeHyperPart* pipe;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterMovementComponent_eventEnterPipeHyper_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterMovementComponent_eventEnterPipeHyper_Parms), &Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_pipe = { "pipe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventEnterPipeHyper_Parms, pipe), Z_Construct_UClass_AFGBuildablePipeHyperPart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::NewProp_pipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "EnterHyperPipe\nEnter a pipe and change movement mode to custom pipe movement. You can not enter pipes directly. You always need a part as an entracne. That is how it's designed atm. Only start parts as well. But we'll see how that changes.\n@param       pipe - the pipe start we want to enter\n@return      bool - returns true if we could enter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "EnterPipeHyper", sizeof(FGCharacterMovementComponent_eventEnterPipeHyper_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics
	{
		struct FGCharacterMovementComponent_eventGetBaseVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetBaseVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Get mBaseVelocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetBaseVelocity", sizeof(FGCharacterMovementComponent_eventGetBaseVelocity_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics
	{
		struct FGCharacterMovementComponent_eventGetIsSprinting_Parms
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
	void Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterMovementComponent_eventGetIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterMovementComponent_eventGetIsSprinting_Parms), &Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Get mIsSprinting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetIsSprinting", sizeof(FGCharacterMovementComponent_eventGetIsSprinting_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics
	{
		struct FGCharacterMovementComponent_eventGetOnLadder_Parms
		{
			UFGLadderComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetOnLadder_Parms, ReturnValue), Z_Construct_UClass_UFGLadderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "@return The ladder we're climbing on; nullptr if not climbing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetOnLadder", sizeof(FGCharacterMovementComponent_eventGetOnLadder_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics
	{
		struct FGCharacterMovementComponent_eventGetPipeCharacterTransform_Parms
		{
			FVector cameraForwardAxis;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cameraForwardAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeCharacterTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::NewProp_cameraForwardAxis = { "cameraForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeCharacterTransform_Parms, cameraForwardAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::NewProp_cameraForwardAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetPipeCharacterTransform", sizeof(FGCharacterMovementComponent_eventGetPipeCharacterTransform_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics
	{
		struct FGCharacterMovementComponent_eventGetPipeHyperDataRef_Parms
		{
			FPlayerPipeHyperData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeHyperDataRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerPipeHyperData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetPipeHyperDataRef", sizeof(FGCharacterMovementComponent_eventGetPipeHyperDataRef_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics
	{
		struct FGCharacterMovementComponent_eventGetPipeMinSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeMinSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetPipeMinSpeed", sizeof(FGCharacterMovementComponent_eventGetPipeMinSpeed_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics
	{
		struct FGCharacterMovementComponent_eventGetPipeTravelDirectionWorld_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeTravelDirectionWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetPipeTravelDirectionWorld", sizeof(FGCharacterMovementComponent_eventGetPipeTravelDirectionWorld_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics
	{
		struct FGCharacterMovementComponent_eventGetPipeVelocity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventGetPipeVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetPipeVelocity", sizeof(FGCharacterMovementComponent_eventGetPipeVelocity_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics
	{
		struct FGCharacterMovementComponent_eventGetWantsToSprint_Parms
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
	void Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterMovementComponent_eventGetWantsToSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterMovementComponent_eventGetWantsToSprint_Parms), &Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Get mGetWantsToSprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "GetWantsToSprint", sizeof(FGCharacterMovementComponent_eventGetWantsToSprint_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics
	{
		struct FGCharacterMovementComponent_eventIsInHyperPipe_Parms
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
	void Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterMovementComponent_eventIsInHyperPipe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterMovementComponent_eventIsInHyperPipe_Parms), &Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "IsInHyperPipe\n@return      bool - returns true if we are currently moving in a hyper tube" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "IsInHyperPipe", sizeof(FGCharacterMovementComponent_eventIsInHyperPipe_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hyper Tube" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "OnNewTravelPipeSection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hookLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hookLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::NewProp_hookLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::NewProp_hookLocation = { "hookLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterMovementComponent_eventServerSetHookLocation_Parms, hookLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::NewProp_hookLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::NewProp_hookLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::NewProp_hookLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "End UCharacterMovementComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterMovementComponent, nullptr, "ServerSetHookLocation", sizeof(FGCharacterMovementComponent_eventServerSetHookLocation_Parms), Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCharacterMovementComponent_NoRegister()
	{
		return UFGCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBoostJumpTimeWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBoostJumpTimeWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBoostJumpVelocityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBoostJumpVelocityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBoostJumpZMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBoostJumpZMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBaseVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mBaseVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxSlideAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxSlideAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlopeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSlopeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlideCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSlideCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPipeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPipeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnLadder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOnLadder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedJumpingStilts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedJumpingStilts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedHookshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedHookshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedParachute_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedParachute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedJetPack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedJetPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJumpOffLadderVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mJumpOffLadderVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSprintMinDotResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSprintMinDotResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClimbSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mClimbSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsParachuting_MetaData[];
#endif
		static void NewProp_mIsParachuting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsParachuting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastJumpTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLastJumpTimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_EnterPipeHyper, "EnterPipeHyper" }, // 2170058575
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity, "GetBaseVelocity" }, // 213356298
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting, "GetIsSprinting" }, // 3285256520
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder, "GetOnLadder" }, // 3003841527
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeCharacterTransform, "GetPipeCharacterTransform" }, // 3649538559
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeHyperDataRef, "GetPipeHyperDataRef" }, // 3330594210
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeMinSpeed, "GetPipeMinSpeed" }, // 2796266044
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeTravelDirectionWorld, "GetPipeTravelDirectionWorld" }, // 1587353094
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetPipeVelocity, "GetPipeVelocity" }, // 3457536181
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint, "GetWantsToSprint" }, // 534663488
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_IsInHyperPipe, "IsInHyperPipe" }, // 3954304927
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_OnNewTravelPipeSection, "OnNewTravelPipeSection" }, // 1554968878
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation, "ServerSetHookLocation" }, // 2473394484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "How long time after a slide a jump can be input and be counted as a boost jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow = { "mBoostJumpTimeWindow", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpTimeWindow), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for velocity in 2D when boost jumping" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier = { "mBoostJumpVelocityMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpVelocityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for boost jump for Z velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier = { "mBoostJumpZMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpZMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Velocity for the actor without external influence like conveyor belts" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity = { "mBaseVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBaseVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Max angle ( in radians ) for allowing to slide" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle = { "mMaxSlideAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mMaxSlideAngle), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Gets the multiplier for slope velocity" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve = { "mSlopeCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSlopeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Get velocity from curve when sliding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve = { "mSlideCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSlideCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mPipeData_MetaData[] = {
		{ "Category", "FGCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mPipeData = { "mPipeData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mPipeData), Z_Construct_UScriptStruct_FPlayerPipeHyperData, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mPipeData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mPipeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "The ladder we're climbing; null if not climbing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder = { "mOnLadder", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mOnLadder), Z_Construct_UClass_UFGLadderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that set our jumping stilts" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts = { "mCachedJumpingStilts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJumpingStilts), Z_Construct_UClass_AFGJumpingStilts_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that set our hookshot location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot = { "mCachedHookshot", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedHookshot), Z_Construct_UClass_AFGHookshot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that issued parachuting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute = { "mCachedParachute", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedParachute), Z_Construct_UClass_AFGParachute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that issued jet pack thrust" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack = { "mCachedJetPack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJetPack), Z_Construct_UClass_AFGJetPack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Force to apply when jumping off a ladder." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity = { "mJumpOffLadderVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mJumpOffLadderVelocity), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "The minimum dot value between velocity and character forward to allow sprint." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult = { "mSprintMinDotResult", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSprintMinDotResult), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "The speed at witch a character sprints //ReadWrite is only to enable blueprint prototoyping of shit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed = { "mMaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mMaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "The speed at which a character climbs ladders" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed = { "mClimbSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_MetaData[] = {
		{ "Category", "JetPack" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "If true, try to parachuting on next update. If false, try to stop parachuting on next update." },
	};
#endif
	void Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_SetBit(void* Obj)
	{
		((UFGCharacterMovementComponent*)Obj)->mIsParachuting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting = { "mIsParachuting", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGCharacterMovementComponent), &Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mLastJumpTimeStamp_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Public/FGCharacterMovementComponent.h" },
		{ "ToolTip", "Timestamp of last time we jumped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mLastJumpTimeStamp = { "mLastJumpTimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mLastJumpTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mLastJumpTimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mLastJumpTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mPipeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mLastJumpTimeStamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::ClassParams = {
		&UFGCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCharacterMovementComponent, 1532634008);
	template<> FACTORYGAME_API UClass* StaticClass<UFGCharacterMovementComponent>()
	{
		return UFGCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCharacterMovementComponent(Z_Construct_UClass_UFGCharacterMovementComponent, &UFGCharacterMovementComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
