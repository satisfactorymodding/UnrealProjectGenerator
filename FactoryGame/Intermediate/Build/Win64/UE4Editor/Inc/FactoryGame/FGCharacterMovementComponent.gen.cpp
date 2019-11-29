// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCharacterMovementComponent() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterMovementComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLadderComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint();
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
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECustomMovementMode_Hash() { return 364245163U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CMM_Ladder.DisplayName", "Ladder" },
				{ "CMM_None.DisplayName", "None" },
				{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
			{ "GetBaseVelocity", &UFGCharacterMovementComponent::execGetBaseVelocity },
			{ "GetIsSprinting", &UFGCharacterMovementComponent::execGetIsSprinting },
			{ "GetOnLadder", &UFGCharacterMovementComponent::execGetOnLadder },
			{ "GetWantsToSprint", &UFGCharacterMovementComponent::execGetWantsToSprint },
			{ "ServerSetHookLocation", &UFGCharacterMovementComponent::execServerSetHookLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetBaseVelocity, "GetBaseVelocity" }, // 1220339117
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetIsSprinting, "GetIsSprinting" }, // 4002179365
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetOnLadder, "GetOnLadder" }, // 719973379
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_GetWantsToSprint, "GetWantsToSprint" }, // 691049039
		{ &Z_Construct_UFunction_UFGCharacterMovementComponent_ServerSetHookLocation, "ServerSetHookLocation" }, // 554243783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "How long time after a slide a jump can be input and be counted as a boost jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow = { "mBoostJumpTimeWindow", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpTimeWindow), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for velocity in 2D when boost jumping" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier = { "mBoostJumpVelocityMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpVelocityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpVelocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for boost jump for Z velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier = { "mBoostJumpZMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpZMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBoostJumpZMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData[] = {
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Velocity for the actor without external influence like conveyor belts" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity = { "mBaseVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mBaseVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mBaseVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Max angle ( in radians ) for allowing to slide" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle = { "mMaxSlideAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mMaxSlideAngle), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSlideAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Gets the multiplier for slope velocity" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve = { "mSlopeCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSlopeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlopeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Get velocity from curve when sliding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve = { "mSlideCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSlideCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSlideCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "The ladder we're climbing; null if not climbing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder = { "mOnLadder", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mOnLadder), Z_Construct_UClass_UFGLadderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mOnLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData[] = {
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that set our jumping stilts" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts = { "mCachedJumpingStilts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJumpingStilts), Z_Construct_UClass_AFGJumpingStilts_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJumpingStilts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData[] = {
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that set our hookshot location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot = { "mCachedHookshot", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedHookshot), Z_Construct_UClass_AFGHookshot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedHookshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData[] = {
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that issued parachuting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute = { "mCachedParachute", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedParachute), Z_Construct_UClass_AFGParachute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedParachute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData[] = {
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "A cached instance of the equipment that issued jet pack thrust" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack = { "mCachedJetPack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJetPack), Z_Construct_UClass_AFGJetPack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mCachedJetPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "Force to apply when jumping off a ladder." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity = { "mJumpOffLadderVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mJumpOffLadderVelocity), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mJumpOffLadderVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "The minimum dot value between velocity and character forward to allow sprint." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult = { "mSprintMinDotResult", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mSprintMinDotResult), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mSprintMinDotResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "The speed at witch a character sprints //ReadWrite is only to enable blueprint prototoyping of shit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed = { "mMaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mMaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mMaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
		{ "ToolTip", "The speed at which a character climbs ladders" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed = { "mClimbSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCharacterMovementComponent, mClimbSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mClimbSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterMovementComponent_Statics::NewProp_mIsParachuting_MetaData[] = {
		{ "Category", "JetPack" },
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
		{ "ModuleRelativePath", "FGCharacterMovementComponent.h" },
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
	IMPLEMENT_CLASS(UFGCharacterMovementComponent, 1726821073);
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
